class CircularBuffer {
    private final int[] buffer;
    private int head = 0;
    private int tail = 0;
    private int count = 0;

    public CircularBuffer(int size) {
        buffer = new int[size];
    }

    public synchronized void put(int value) throws InterruptedException {
        while (count == buffer.length) {
            wait();
        }
        buffer[head] = value;
        head = (head + 1) % buffer.length;
        count++;
        System.out.println("Produttore ha inserito: " + value);
        notifyAll();
    }

    public synchronized int get() throws InterruptedException {
        while (count == 0) {
            wait();
        }
        int value = buffer[tail];
        tail = (tail + 1) % buffer.length;
        count--;
        System.out.println("Consumatore ha estratto: " + value);
        notifyAll();
        return value;
    }
}

class Producer implements Runnable {
    private final CircularBuffer buffer;

    public Producer(CircularBuffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                buffer.put(i);
                Thread.sleep(200);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

class Consumer implements Runnable {
    private final CircularBuffer buffer;

    public Consumer(CircularBuffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                buffer.get();
                Thread.sleep(300);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

public class ProducerConsumerDemo {
    public static void main(String[] args) {
        CircularBuffer buffer = new CircularBuffer(5);
        Thread producer = new Thread(new Producer(buffer));
        Thread consumer = new Thread(new Consumer(buffer));
        producer.start();
        consumer.start();
    }
}

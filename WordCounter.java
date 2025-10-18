import java.io.*;
import java.util.*;

public class WordCounter {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("sample.txt"));
            Map<String, Integer> wordCount = new HashMap<>();
            String line;

            while ((line = br.readLine()) != null) {
                String[] words = line.toLowerCase().split("\\W+");
                for (String word : words) {
                    if (!word.isEmpty())
                        wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
                }
            }
            br.close();

            for (Map.Entry<String, Integer> e : wordCount.entrySet())
                System.out.println(e.getKey() + " : " + e.getValue());

        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
    }
}

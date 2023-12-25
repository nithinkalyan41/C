import java.util.ArrayList;
import java.util.List;

public class sol {

    public static void main(String[] args) {
        List<String> validAuthTokens = List.of("et51u8i9p1q7", "b8nn5j40m76v");
        List<String[]> requests = List.of(
                new String[]{"GET", "https://example.com?token=et51u8i9p1q7&id=2e3rt&name=alex"},
                new String[]{"POST", "https://example.com?token=r5b0191mlp09&csrf=ia+09&id=70&name=evan"}
        );

        List<String> results = parseRequests(validAuthTokens, requests);
        for (String result : results) {
            System.out.println(result);
        }
    }

    public static List<String> parseRequests(List<String> validAuthTokens, List<String[]> requests) {
        List<String> results = new ArrayList<>();

        for (String[] request : requests) {
            String method = request[0];
            String url = request[1];

            String token = extractTokenFromUrl(url);

            if (validAuthTokens.contains(token)) {
                String id = extractParameterFromUrl(url, "id");
                String name = extractParameterFromUrl(url, "name");
                results.add("Valid, id: " + id + ", name: " + name);
            } else {
                results.add("Invalid");
            }
        }

        return results;
    }

    private static String extractTokenFromUrl(String url) {
        String[] parts = url.split("[?&=]");
        for (int i = 0; i < parts.length - 1; i++) {
            if (parts[i].equals("token")) {
                return parts[i + 1];
            }
        }
        return null;
    }

    private static String extractParameterFromUrl(String url, String parameter) {
        String[] parts = url.split("[?&=]");
        for (int i = 0; i < parts.length - 1; i++) {
            if (parts[i].equals(parameter)) {
                return parts[i + 1];
            }
        }
        return null;
    }
}

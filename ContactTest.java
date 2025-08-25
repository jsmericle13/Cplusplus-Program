import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class ContactTest {
    @Test
    public void testValidContactCreation() {
        Contact c = new Contact("1", "John", "Doe", "1234567890", "123 Main St");
        assertEquals("John", c.getFirstName());
    }
    @Test
    public void testInvalidContactId() {
        assertThrows(IllegalArgumentException.class, () -> {
            new Contact(null, "John", "Doe", "1234567890", "123 Main St");
        });
    }
}

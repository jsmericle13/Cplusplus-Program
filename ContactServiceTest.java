import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class ContactServiceTest {
    @Test
    public void testAddAndDeleteContact() {
        ContactService service = new ContactService();
        Contact c = new Contact("1", "John", "Doe", "1234567890", "123 Main St");
        assertTrue(service.addContact(c));
        assertTrue(service.deleteContact("1"));
    }
}

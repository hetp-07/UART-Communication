// uart.h



#define ECHO
class UART {
public:
    UART(int baudRate);
    void begin();
    void println(const char* message);
    void echoBack();
	void printdataln(float data);
private:
    int _baudRate;
};


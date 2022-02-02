#include <iostream>

using namespace std;

class Log {
    private:
        int m_LogLevel = 1;

    // Public Variables
    public:
        // TODO: An enum might be a better type for this
        static const int LogLevelError = 0;
        static const int LogLevelWarning = 1;
        static const int LogLevelInfo = 2;

    // Public Methods
    public:
        void SetLevel(int level) {
            m_LogLevel = level;
        }

        // TODO: Change param to string type
        void Error(const char* message) {
            if (m_LogLevel >= LogLevelError) {
                cout << "[ERROR]: " << message << endl;
            }
        }

        // TODO: Change param to string type
        void Warn(const char* message) {
            if (m_LogLevel >= LogLevelWarning) {
                cout << "[WARNING]: " << message << endl;
            }
        }        

        // TODO: Change param to string type
        void Info(const char* message) {
            if (m_LogLevel >= LogLevelInfo) {
                cout << "[INFO]: " << message << endl;
            }
        }

};

int main() {
    Log log;
    log.SetLevel(Log::LogLevelInfo);
    log.Error("Hello!");
    log.Warn("Hello!");
    log.Info("Hello!");
    cin.get();
}
/* socket */
#define MSG_NOSIGNAL        0x4000
#define MSG_PEEK            0x0002
#define MSG_NOSIGNAL_PEEK   (MSG_NOSIGNAL | MSG_PEEK)

/* signal */
#define EINVAL              0x16
#define SIGRTMAX            0x40
#define NSIG                0x41
#define SA_RESTART          0x10000000
#define MASK_SA_RESTORER    0x4000000

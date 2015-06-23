
#ifndef _WILDDOG_ENDIAN_H_
#define _WILDDOG_ENDIAN_H_

#ifdef __cplusplus
extern "C"
{
#endif

 

#ifdef WILDDOG_LITTLE_ENDIAN
#define __WD_SWAP32__(val) ( (u32) ((((val) & 0xFF000000) >> 24 ) | \
    (((val) & 0x00FF0000) >> 8) \
             | (((val) & 0x0000FF00) << 8) | (((val) & 0x000000FF) << 24)) )

#define __WD_SWAP16__(val) ( (u16) ((((val) & 0xFF00) >> 8) | \
    (((val) & 0x00FF) << 8)))


#ifndef htonl
#define htonl(val)  __WD_SWAP32__(val)
#endif /* htonl */
#ifndef ntohl
#define ntohl(val)  __WD_SWAP32__(val)
#endif /* htonl */

#ifndef htons
#define htons(val)  __WD_SWAP16__(val)
#endif /*htons */

#ifndef ntohs
#define ntohs(val)  __WD_SWAP16__(val)
#endif /*htons */

#else
    
#ifndef htonl
#define htonl(val)  
#endif /* htonl */
#ifndef ntohl
#define ntohl(val)  
#endif /* htonl */

#ifndef htons
#define htons(val)  
#endif /*htons */

#ifndef ntohs
#define ntohs(val)  
#endif /*htons */

#endif

#ifdef __cplusplus
}
#endif

#endif /*_WILDDOG_ENDIAN_H_*/


/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FIRSTTRY_H_RPCGEN
#define _FIRSTTRY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define FIRSTTRYPROG 0x30000824
#define FIRSTTRYVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define FIRSTTRY 1
extern  char ** firsttry_1(char **, CLIENT *);
extern  char ** firsttry_1_svc(char **, struct svc_req *);
extern int firsttryprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define FIRSTTRY 1
extern  char ** firsttry_1();
extern  char ** firsttry_1_svc();
extern int firsttryprog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FIRSTTRY_H_RPCGEN */

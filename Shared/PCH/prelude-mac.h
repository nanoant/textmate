#ifndef PRELUDE_MAC_H_X1SR1JB2
#define PRELUDE_MAC_H_X1SR1JB2

#import "prelude.c"

#define blend blend_enum

#if MAC_OS_X_VERSION_MAX_ALLOWED <= MAC_OS_X_VERSION_10_4
typedef float CGFloat;
#endif

#import <AudioToolbox/AudioToolbox.h>
#import <Carbon/Carbon.h>
#import <CommonCrypto/CommonDigest.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreServices/CoreServices.h>
#import <Security/Security.h>
#import <SystemConfiguration/SystemConfiguration.h>

#undef blend

#import <asl.h>
#import <libkern/OSAtomic.h>
#import <machine/byte_order.h>

#endif /* end of include guard: PRELUDE_MAC_H_X1SR1JB2 */

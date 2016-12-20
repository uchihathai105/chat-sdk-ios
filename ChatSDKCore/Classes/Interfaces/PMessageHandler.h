//
//  PMessageHandler.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 16/12/2016.
//
//

#ifndef PMessageHandler_h
#define PMessageHandler_h

@protocol PMessageHandler <NSObject>

// This is really needed for modules which provide a custom message cell class
@optional
-(Class) messageCellClass;

@end

#endif /* PMessageHandler_h */

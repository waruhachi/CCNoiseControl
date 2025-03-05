#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <ControlCenterUIKit/CCUICAPackageView.h>
#import <ControlCenterUIKit/CCUICAPackageDescription.h>

#import "CCNoiseControl.h"
#import "CCNoiseControlNormal.h"

@interface CCNoiseControlProvider : NSObject {
    NSMutableDictionary* _moduleInstancesByIdentifier;
}
@end

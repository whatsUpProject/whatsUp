//
//  CheckIn.h
//  whatsUp
//
//  Created by sandy moon on 12/12/16.
//  Copyright © 2016 NYU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

static NSMutableArray *checkInArray;

@interface CheckIn : NSObject <MKAnnotation>{
}
@property (nonatomic,assign)CLLocationCoordinate2D coordinate;
@property NSString *subtitle, *title, *Image;




+(BOOL) initArray;
+(BOOL) CheckInitiated;
+(CheckIn*) checkInfoWithsubtitle: (NSString *) subtitle
                     withtitle: (NSString*) title
                    withImage: (NSString *) Image
               withCoordinate:  (CLLocationCoordinate2D) coordinate;


-(CheckIn*) initWithsubtitle:(NSString *) subtitle
                withtitle: (NSString*) title
               withImage: (NSString *) Image
                withCoordinate:  (CLLocationCoordinate2D) coordinate;;



+(int) size;
+(CLLocationCoordinate2D) coordinate;

//+(CheckIn *) getObjective_InfoAtIndex: (int) index;

+(id) getArray;

+(BOOL) Add_Item: (CheckIn*) value;
@end

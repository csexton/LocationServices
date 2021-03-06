//
//  LocationServicesViewController.h
//  LocationServices
//
//  Created by Michael Harper on 9/1/11.
//  Copyright 2011 Standalone Code LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface LocationServicesViewController : UIViewController<CLLocationManagerDelegate>
{
  
}

@property (strong, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (strong, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (strong, nonatomic) IBOutlet UILabel *headingLabel;
@property (strong, nonatomic) IBOutlet UILabel *altitudeLabel;
@property (strong, nonatomic) CLLocation *currentLocation;
@property (strong, nonatomic) CLHeading *currentHeading;

@end

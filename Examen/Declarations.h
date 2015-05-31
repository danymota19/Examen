//
//  Declarations.h
//  Examen
//
//  Created by Agustin Castaneda on 21/05/15.
//  Copyright (c) 2015 Agustin Castaneda. All rights reserved.
//

#import <Foundation/Foundation.h>

//Names and Images
#define     nInitialNames     @"Daniela", @"Agustin",@"Ramon",nil
#define     nInitialsImages @"1_circle-32.png", @"2_circle-32.png",@"3_circle-32.png",nil

//Cells features
#define     nCellStatesHeight   64


//Colors
#define     nBlackTransparency  colorWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.50

//Bluetooth

#define TRANSFER_SERVICE_UUID           @"ECD22D85-7082-4AE3-BBCA-D270BCC7DDB0"
#define TRANSFER_CHARACTERISTIC_UUID    @"19A6B53D-BA1D-4518-A9BD-312F9DFBAC6F"

#define NOTIFY_MTU      20

extern NSMutableArray *maNames;
extern NSMutableArray *maImages;
extern int            miIndex;

extern NSUserDefaults *mUserDefaults;


@interface Declarations : NSObject

@end

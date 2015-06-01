//
//  TabBTCentral.h
//  Examen
//
//  Created by Agustin Castaneda on 21/05/15.
//  Copyright (c) 2015 Agustin Castaneda. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>
#import "Declarations.h"

@interface TabBTCentral : UIViewController<CBCentralManagerDelegate, CBPeripheralDelegate>

@property (strong, nonatomic) CBCentralManager      *centralManager;
@property (strong, nonatomic) CBPeripheral          *discoveredPeripheral;
@property (strong, nonatomic) NSMutableData         *data;


@property (strong, nonatomic) IBOutlet UITextField *txtBT;


-(void)postToFacebook;
//btn
- (IBAction)btnSharePressed:(id)sender;


//text
@property (weak, nonatomic) IBOutlet UITextField *txtMessage;


@end

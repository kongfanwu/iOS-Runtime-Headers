/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PHAssetCollectionDataSource>, <PUPhotoSelectionManagerDelegate>, NSMapTable, NSMutableSet, NSOrderedSet, NSSet;

@interface PUPhotoSelectionManager : NSObject {
    <PHAssetCollectionDataSource> *_dataSource;
    <PUPhotoSelectionManagerDelegate> *_delegate;
    long long _options;
    long long _selectionChangeCount;
    NSMapTable *_selectionEntriesByAssetCollection;
    NSMutableSet *_uniqueAssetSelection;
}

@property <PHAssetCollectionDataSource> * dataSource;
@property <PUPhotoSelectionManagerDelegate> * delegate;
@property(readonly) long long options;
@property(readonly) NSOrderedSet * orderedSelectedAssets;
@property(readonly) NSSet * selectedAssets;

- (void).cxx_destruct;
- (void)_beginSelectionChange;
- (void)_endSelectionChange;
- (id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(bool)arg2;
- (bool)_shouldUniqueAssets;
- (bool)areAllAssetsSelectedInAssetCollection:(id)arg1;
- (bool)areAllAssetsSelectedInAssetCollections:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)deselectAllAssets;
- (void)deselectAllAssetsInAssetCollections:(id)arg1;
- (void)deselectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(id)arg2;
- (void)handlePhotoLibraryChange:(id)arg1;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (void)invalidateAllAssetIndexes;
- (bool)isAnyAssetSelectedInAssetCollection:(id)arg1;
- (bool)isAnyAssetSelectedInAssetCollections:(id)arg1;
- (bool)isAssetAtIndexSelected:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (id)localizedSelectionString;
- (long long)options;
- (id)orderedSelectedAssets;
- (void)selectAllAssetsInAssetCollections:(id)arg1;
- (void)selectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1;
- (id)selectedAssets;
- (id)selectedAssetsWithAssetCollectionOrdering:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
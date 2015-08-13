int singleNumber(int* nums, int numsSize) {
	int rel = nums[0];
	for(int i=1; i<numsSize; i++) {
		rel = rel ^ nums[i];
	}
	return rel;
}

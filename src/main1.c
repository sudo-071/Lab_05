int main()
{
	int src1 = 947;
	int src2 = 13;
	int result = 0;
	for (int i = 1; i <= src1 && i <= src2; i++){
		if (src1 % i == 0 && src2 % i == 0){
			result = i;
		}
	}
	return 0;
}

char __cdecl sub_101BFA10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  char result; // al
  float v10[3]; // [esp+0h] [ebp-E4h] BYREF
  _DWORD v11[27]; // [esp+Ch] [ebp-D8h] BYREF
  _DWORD v12[27]; // [esp+78h] [ebp-6Ch] BYREF

  if ( a7 || a8 )
    return 0;
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  v10[0] = 0.30860001;
  v10[1] = 0.60939997;
  v10[2] = 0.082000002;
  v8 = sub_101BF8B0(a4);
  v11[0] = 108;
  v11[1] = 6150;
  v11[3] = a5;
  v11[2] = a6;
  v11[4] = a5 * (_DWORD)sub_101BD400(a2)[1];
  v11[9] = a1;
  v11[18] = 32;
  switch ( a2 )
  {
    case 0:
      v11[19] = 65;
      v11[21] = 32;
      goto LABEL_8;
    case 2:
      v11[19] = 64;
      v11[21] = 24;
LABEL_8:
      v11[24] = 16711680;
      v11[22] = 255;
      goto LABEL_9;
    case 12:
      v11[19] = 65;
      v11[21] = 32;
      v11[22] = 16711680;
      v11[24] = 255;
      goto LABEL_9;
    case 16:
      v11[19] = 64;
      v11[21] = 32;
      v11[22] = 16711680;
      v11[24] = 255;
LABEL_9:
      v11[25] = -16777216;
      v11[23] = 65280;
      v12[0] = 108;
      sub_101C52F0(v11, 0, v12, a3, v8, v10);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

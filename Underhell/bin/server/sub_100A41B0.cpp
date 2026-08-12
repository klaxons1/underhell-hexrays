__int16 __thiscall sub_100A41B0(void *this, int *a2, int *a3)
{
  int v5; // [esp+4h] [ebp-34h] BYREF
  int v6[5]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v7[5]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v8; // [esp+30h] [ebp-8h]
  char v9; // [esp+34h] [ebp-4h]

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v9 = v9 & 0xF8 | 4;
  v5 = *a2;
  sub_100A1500(v6, a3);
  LOWORD(this) = sub_100A3750((int)this, (int)&v5);
  sub_10184660(v8);
  sub_102375F0(v7);
  sub_102375F0(v6);
  return (__int16)this;
}

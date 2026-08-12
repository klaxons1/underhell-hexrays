int __thiscall sub_10421610(void *this, int *a2, _DWORD *a3)
{
  int v4; // esi
  int v6; // [esp+4h] [ebp-20h] BYREF
  _DWORD v7[4]; // [esp+8h] [ebp-1Ch] BYREF
  __int16 v8; // [esp+18h] [ebp-Ch]
  __int16 v9; // [esp+1Ah] [ebp-Ah]
  __int16 v10; // [esp+1Ch] [ebp-8h]
  __int16 v11; // [esp+1Eh] [ebp-6h]
  int v12; // [esp+20h] [ebp-4h]

  memset(&v7[1], 0, 12);
  v9 = 0;
  v12 = 0;
  v8 = -1;
  v10 = -1;
  v11 = -1;
  v6 = *a2;
  v7[0] = sub_1041F1A0;
  sub_10421400((int)v7, a3);
  v4 = sub_10421550((int)this, (int)&v6);
  sub_10420DE0((int)v7);
  return v4;
}

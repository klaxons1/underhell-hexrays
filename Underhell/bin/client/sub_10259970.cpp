int __thiscall sub_10259970(int *this, int a2)
{
  int v2; // esi
  int *v3; // edx
  int v4; // eax
  bool v5; // zf
  int result; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp-8h] [ebp-30h]
  _DWORD v11[2]; // [esp+8h] [ebp-20h] BYREF
  char v12; // [esp+10h] [ebp-18h]
  __int16 v13; // [esp+12h] [ebp-16h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v2 = this[66];
  v3 = this + 66;
  v4 = 32 * this[69];
  v5 = *(_DWORD *)(v4 + v2 - 32) == a2;
  result = v4 + v2 - 32;
  if ( !v5 )
  {
    v7 = this[59];
    if ( *(_DWORD *)(result + 28) == v7 )
    {
      *(_DWORD *)result = a2;
    }
    else
    {
      v11[1] = *(_DWORD *)(result + 4);
      v12 = *(_BYTE *)(result + 8);
      v13 = *(_WORD *)(result + 10);
      v14 = *(_DWORD *)(result + 12);
      v15 = *(_DWORD *)(result + 16);
      v8 = *(_DWORD *)(result + 20);
      v9 = *(_DWORD *)(result + 24);
      v16 = v8;
      v17 = v9;
      v10 = v3[3];
      v11[0] = a2;
      v18 = v7;
      return sub_10258BB0(v3, v10, (int)v11);
    }
  }
  return result;
}

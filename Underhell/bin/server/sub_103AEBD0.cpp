int __thiscall sub_103AEBD0(int this, int a2, int a3, float a4)
{
  int v4; // eax
  int result; // eax
  int v6; // edx
  int v7; // ecx
  _BYTE v8[12]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(this + 3844);
  if ( v4 == -1 )
  {
    sub_10021390((float *)this, (float *)a2, a3, a4);
    return a2;
  }
  else
  {
    sub_100BEB30(this, v4, (int)v9, (int)v8);
    result = a2;
    v6 = v9[1];
    *(_DWORD *)a2 = v9[0];
    v7 = v9[2];
    *(_DWORD *)(a2 + 4) = v6;
    *(_DWORD *)(a2 + 8) = v7;
  }
  return result;
}

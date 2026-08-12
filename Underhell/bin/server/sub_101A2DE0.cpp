int __thiscall sub_101A2DE0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  int v6; // edx
  int v7; // eax
  int v8[20]; // [esp+Ch] [ebp-5Ch] BYREF
  _DWORD v9[3]; // [esp+5Ch] [ebp-Ch] BYREF

  sub_1001E4E0(v8, (int)a2);
  *(float *)&v8[13] = 0.0099999998;
  result = sub_1032DDF0((int)this, (int)v8, a3, a4);
  if ( this[212] == 2 && *(_DWORD *)(a4 + 68) == 1 )
  {
    v6 = a2[4];
    v7 = a2[5];
    v9[2] = a2[6];
    v9[0] = v6;
    v9[1] = v7;
    return ((int (__thiscall *)(int (__stdcall ***)(char), _DWORD *, int, int, _DWORD))(*off_1061B7A0)[3])(
             off_1061B7A0,
             v9,
             1,
             1,
             0);
  }
  return result;
}

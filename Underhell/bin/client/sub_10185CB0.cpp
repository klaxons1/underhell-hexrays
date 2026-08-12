void __thiscall sub_10185CB0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  void (__thiscall *v4)(_DWORD *, int *, int *, int *, int *); // edx
  int v5; // eax
  int v6; // ecx
  _BYTE v7[4]; // [esp+4h] [ebp-18h] BYREF
  int v8; // [esp+8h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  if ( dword_10445708 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10445708 + 128))(dword_10445708) )
  {
    sub_10132120((int)v7, (int)&v12);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10445708 + 864))(dword_10445708);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10445708 + 868))(dword_10445708);
    v4 = *(void (__thiscall **)(_DWORD *, int *, int *, int *, int *))(this[62] + 44);
    v12 -= v2 + v3;
    v4(this + 62, &v8, &v11, &v9, &v10);
    v5 = v11;
    if ( v11 < v2 )
    {
      v5 = v2;
      v11 = v2;
    }
    v6 = v10;
    if ( v10 >= v12 )
      v6 = v12;
    sub_10236200(v8, v5, v9, v6);
  }
}

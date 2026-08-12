// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10168390@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // esi
  int v4; // eax
  int (__thiscall *v5)(int, float *, float *, int); // edx
  int result; // eax
  int (__thiscall *v7)(int, float *, float *); // edx
  float v9; // [esp+14h] [ebp-DCh] BYREF
  _BYTE v10[92]; // [esp+6Ch] [ebp-84h] BYREF
  float v11[3]; // [esp+C8h] [ebp-28h] BYREF
  float v12; // [esp+D4h] [ebp-1Ch] BYREF
  _BYTE *v13; // [esp+D8h] [ebp-18h]
  int v14; // [esp+DCh] [ebp-14h]
  int v15; // [esp+E0h] [ebp-10h]
  int v16; // [esp+E4h] [ebp-Ch]
  void *v17; // [esp+E8h] [ebp-8h]
  void *retaddr; // [esp+F0h] [ebp+0h]

  v16 = a1;
  v17 = retaddr;
  sub_1022A940("originx", 0.0);
  sub_1022A940("originy", 0.0);
  sub_1022A940("originz", 0.0);
  sub_1022A940("startx", 0.0);
  sub_1022A940("starty", 0.0);
  sub_1022A940("startz", 0.0);
  v3 = sub_1022A800("hitbox", 0);
  v4 = sub_1022B4C0("decalname", (int)Locale);
  v15 = (**(int (__thiscall ***)(int, int, int, int))dword_10413164)(dword_10413164, v4, a2, a3);
  sub_101680F0(v11, &v12, 0, v3, v15);
  if ( v3 )
  {
    sub_1000E430(&v9, v11, &v12);
    v5 = *(int (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_10413190 + 24);
    v14 = (int)v10;
    v13 = 0;
    LODWORD(v12) = v15;
    return v5(dword_10413190, v11, &v12, v3 - 1);
  }
  else
  {
    result = sub_1007A6A0(off_103DCD78, 0);
    if ( result )
    {
      v7 = *(int (__thiscall **)(int, float *, float *))(*(_DWORD *)result + 424);
      v14 = -1;
      v13 = v10;
      v12 = 0.0;
      LODWORD(v11[2]) = v15;
      v11[1] = 0.0;
      LODWORD(v11[0]) = &v12;
      return v7(result, v11, &v12);
    }
  }
  return result;
}

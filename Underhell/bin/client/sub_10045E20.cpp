int __usercall sub_10045E20@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, double a3@<st0>)
{
  int result; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  _BYTE v14[12]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v15[12]; // [esp+14h] [ebp-3Ch] BYREF
  _BYTE v16[12]; // [esp+20h] [ebp-30h] BYREF
  float v17[3]; // [esp+2Ch] [ebp-24h] BYREF
  _DWORD v18[3]; // [esp+38h] [ebp-18h] BYREF
  float v19; // [esp+44h] [ebp-Ch] BYREF
  float v20; // [esp+48h] [ebp-8h]
  float v21; // [esp+4Ch] [ebp-4h]

  result = a1[28] >> 2;
  if ( (a1[28] & 4) != 0 )
  {
    if ( !a1[1067] )
    {
      if ( sub_100DDA40(28) )
        result = sub_1009D260(a1[20]);
      else
        result = 0;
      a1[1067] = result;
      if ( !result )
        return result;
      sub_1009D3C0(result);
    }
    (*(void (__thiscall **)(_DWORD *, float *, int))(*a1 + 532))(a1, &v19, a2);
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a1 + 536))(a1);
    v18[0] = *v5;
    v18[1] = v5[1];
    v6 = *a1;
    v18[2] = v5[2];
    if ( (*(int (__thiscall **)(_DWORD *))(v6 + 788))(a1)
      && (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 788))(a1) + 4;
      v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 140))(v7, "muzzle_flash");
      if ( v8 <= 0 )
      {
        sub_101EDFB0(v18, v17);
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
        sub_10008FA0((float *)(v9 + 24));
        v19 = v17[0] * a3 + v19;
        v20 = v17[1] * a3 + v20;
        v21 = a3 * v17[2] + v21;
      }
      else
      {
        (*(void (__thiscall **)(int, int, float *, _DWORD *))(*(_DWORD *)v7 + 148))(v7, v8, &v19, v18);
      }
    }
    else if ( !*((_BYTE *)a1 + 5285) )
    {
      v10 = sub_10045780(a1, 1);
      v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(v10 + 4) + 140))(v10 + 4, "Flashlight");
      v12 = sub_10045780(a1, 1);
      (*(void (__thiscall **)(int, int, float *, _DWORD *))(*(_DWORD *)(v12 + 4) + 148))(v12 + 4, v11, &v19, v18);
    }
    sub_101EE040(v18, v14, v15, v16);
    return (**(int (__thiscall ***)(_DWORD, float *, _BYTE *, _BYTE *, _BYTE *))a1[1067])(a1[1067], &v19, v14, v15, v16);
  }
  else
  {
    v13 = a1[1067];
    if ( v13 )
    {
      sub_1009D410(a1[1067]);
      result = sub_10034930(v13);
      a1[1067] = 0;
    }
  }
  return result;
}

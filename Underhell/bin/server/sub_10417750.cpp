_DWORD *__usercall sub_10417750@<eax>(
        float a1@<edi>,
        float a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  _DWORD *result; // eax
  _DWORD *v10; // esi
  int *v11; // ecx
  int v12; // edx
  int v13; // edi
  float v14; // [esp+4h] [ebp-10h]
  float v15; // [esp+10h] [ebp-4h]

  result = (_DWORD *)sub_101811E0("env_flare", -1);
  v10 = result;
  if ( result )
  {
    sub_1025F370(result, &a2, 0);
    sub_100E11A0((int)v10, &a5);
    (*(void (__thiscall **)(_DWORD *, float))(*v10 + 96))(v10, COERCE_FLOAT(LODWORD(a1)));
    v10[49] = sub_10416840;
    sub_100EC3F0(v10, (int)sub_10416380, 0.0, 0);
    sub_10416D60((int)v10, a1, a9);
    v14 = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_100EC4A0(v10, v14, 0);
    v15 = *(float *)(dword_106B31C8 + 12) + a9;
    if ( v10[528] != LODWORD(v15) )
    {
      if ( *((_BYTE *)v10 + 84) )
      {
        *((_BYTE *)v10 + 88) |= 1u;
      }
      else
      {
        v11 = (int *)v10[6];
        if ( v11 )
          sub_100194B0(v11, 2112);
      }
      *((float *)v10 + 528) = v15;
    }
    sub_101129A0((unsigned __int16 *)v10 + 160, v10[89] & 0xFFFB);
    sub_101129A0((unsigned __int16 *)v10 + 160, *((_WORD *)v10 + 178) | 0x10);
    sub_100E0970((int)v10, v12, 5, 1);
    v13 = a8;
    (*(void (__thiscall **)(_DWORD *, int))(*v10 + 76))(v10, a8);
    v10[526] = v13;
    return v10;
  }
  return result;
}

unsigned __int8 __usercall sub_1021C1A0@<al>(unsigned int a1@<ecx>, int a2@<edi>)
{
  unsigned __int8 result; // al
  char *v4; // eax
  _DWORD *v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  result = (unsigned __int8)sub_100E38F0((float *)a1);
  if ( *(_BYTE *)(a1 + 852) )
  {
    if ( *(_DWORD *)(a1 + 836) == -1 )
    {
      v8 = sub_100E8220(a2, "cable/cable.vmt");
      sub_1021B4A0((_DWORD *)(a1 + 836), &v8);
    }
    v4 = *(char **)(a1 + 808);
    if ( !v4 )
      v4 = (char *)String;
    v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
    if ( v5 && v5[6] )
    {
      sub_1021B330(a1, (int)v5, 0);
      if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
      {
        v8 = 1;
        sub_1021B540((int *)(a1 + 804), &v8);
      }
    }
    else if ( (*(_BYTE *)(a1 + 848) & 2) != 0 )
    {
      v8 = -9;
      sub_1021B4F0((int *)(a1 + 804), &v8);
    }
    sub_1021B2B0(a1, a1, 0);
    v6 = *(_DWORD *)(a1 + 300);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 1];
    (*(void (__thiscall **)(unsigned int, int, _DWORD))(*(_DWORD *)a1 + 140))(a1, v7, *(unsigned __int8 *)(a1 + 305));
    sub_1021AD10((_DWORD *)a1);
    return sub_1021C0B0(a1);
  }
  return result;
}

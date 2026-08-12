int __userpurge sub_10035690@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  char v9; // bl
  int *v10; // ecx
  int v11; // eax
  char v12; // cl
  _DWORD *v13; // eax

  result = sub_100697A0(73, 1);
  if ( (_BYTE)result )
    return result;
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)a1 + 1412))(a1, 0, a3, a2);
  v6 = a4;
  sub_10035590((_DWORD *)a1, a4);
  if ( *(_BYTE *)(a1 + 224) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *(_BYTE *)(a1 + 224) = 1;
  }
  v7 = *(_DWORD *)(a4 + 44);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a4 + 44) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a4 + 44) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1176))(a1, v8, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 408))(a1);
  sub_1023C380((int)"AI_BaseNPC.SentenceStop", 0.0, 0);
  if ( *(_BYTE *)(a1 + 1713) )
  {
    if ( *(_DWORD *)(a1 + 808) == 8 )
    {
      if ( *(_DWORD *)(a1 + 1716) < *(_DWORD *)(dword_106B91BC + 48) || (*(_BYTE *)(a1 + 1740) & 1) != 0 )
        goto LABEL_16;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a1 + 1716) >= *(_DWORD *)(dword_106B91BC + 48) / 2 && (*(_BYTE *)(a1 + 1740) & 1) == 0 )
    {
LABEL_12:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1612))(a1, a4);
      goto LABEL_16;
    }
    sub_1023B860("Zombine.Pain");
    sub_1023B860("Zombine.Die");
    sub_1023B860("Zombine.Idle");
    sub_1023B860("Zombine.Alert");
  }
LABEL_16:
  if ( (*(_DWORD *)(a1 + 256) & 0x2000) != 0
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 1040))(a1, a4) )
  {
    *(_DWORD *)(a1 + 196) = 0;
  }
  sub_100CCC00(a1, a4);
  if ( *(_BYTE *)(a1 + 3598) )
  {
    v9 = sub_102175A0(a1);
    if ( v9 != *(_BYTE *)(a1 + 3599) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(a1 + 24);
        if ( v10 )
          sub_100194B0(v10, 3599);
      }
      *(_BYTE *)(a1 + 3599) = v9;
    }
    v6 = a4;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2160))(a1);
  v11 = sub_1007DB30(17);
  if ( v11 != -1 )
  {
    v12 = v11;
    if ( v11 != 999999999 )
    {
      v13 = (_DWORD *)(a1 + 4 * ((v11 - 1000000000) >> 5) + 2192);
      *v13 |= 1 << (v12 & 0x1F);
    }
  }
  if ( *(_DWORD *)(a1 + 2336) != 7 )
    *(_DWORD *)(a1 + 2336) = 7;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 764))(a1)
    || (result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 760))(a1), (_BYTE)result) )
  {
    result = *(_DWORD *)(a1 + 2324);
    if ( result != 7 )
      *(float *)(a1 + 2328) = *(float *)(dword_106B31C8 + 12);
    *(_DWORD *)(a1 + 2324) = 7;
    if ( *(_DWORD *)(a1 + 2336) != 7 )
      *(_DWORD *)(a1 + 2336) = 7;
    if ( result != 7 )
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1404))(a1, result, 7);
  }
  if ( (*(_DWORD *)(v6 + 64) & 0x400000) != 0 && (*(_DWORD *)(a1 + 252) & 0x100000) == 0 )
    return sub_100E1400(a1);
  return result;
}

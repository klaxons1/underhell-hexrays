int __userpurge sub_10044360@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  int result; // eax
  unsigned int v7; // esi
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // al
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [esp-Ch] [ebp-1Ch]
  _BYTE v21[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 500))(a1) )
  {
    v4 = a1[1066];
    if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 2) != v4 >> 12 )
      v5 = 0;
    else
      v5 = *((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 1);
    result = sub_10070850(v5);
    a1[1066] = -1;
    return result;
  }
  v7 = a1[1066];
  if ( v7 != -1 )
  {
    v8 = (int *)((char *)off_103DCD74 + 16 * (a1[1066] & 0xFFF) + 4);
    if ( *((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 2) == a1[1066] >> 12
      && *v8
      && (*(_DWORD *)(a3 + 36) & 0x801) != 0 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 2) == a1[1066] >> 12 )
        v9 = *v8;
      else
        v9 = 0;
      sub_10070830(v9, *(_DWORD *)(a3 + 36));
      result = a3;
      *(_DWORD *)(a3 + 36) &= 0xFFFFF7FE;
      return result;
    }
  }
  v10 = *(_DWORD *)(a3 + 36);
  if ( (v10 & 1) != 0 || (v10 & 0x800) != 0 )
  {
    if ( v7 == -1 )
      goto LABEL_30;
    if ( *((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 2) != a1[1066] >> 12
      || !*((_DWORD *)off_103DCD74 + 4 * (a1[1066] & 0xFFF) + 1) )
    {
      goto LABEL_28;
    }
  }
  if ( sub_10012CD0(a1) )
  {
LABEL_28:
    if ( v7 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) == v7 >> 12 )
    {
      v13 = *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 1);
      goto LABEL_31;
    }
LABEL_30:
    v13 = 0;
    goto LABEL_31;
  }
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 204))(dword_1047CA6C);
  v12 = a1 + 1066;
  if ( v11 )
  {
    v13 = sub_1006BE10(v12);
LABEL_31:
    result = sub_10070850(v13);
    a1[1066] = -1;
    return result;
  }
  v14 = sub_1006BE10(v12);
  v15 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 296))(a1, a2);
  v16 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*a1 + 532))(a1, v21, a3 + 12, v15);
  v17 = sub_100728C0(v16);
  sub_1000F020(a1 + 1066, v17);
  if ( v14 != sub_1006BE10(a1 + 1066) )
  {
    sub_10070850(v14);
    v18 = sub_1006BE10(a1 + 1066);
    sub_100707F0(v18);
  }
  result = sub_1006BE10(a1 + 1066);
  if ( result )
  {
    v20 = *(_DWORD *)(a3 + 36);
    v19 = sub_1006BE10(a1 + 1066);
    result = sub_10070830(v19, v20);
    *(_DWORD *)(a3 + 36) &= 0xFFFFF7FE;
  }
  return result;
}

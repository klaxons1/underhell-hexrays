void __userpurge sub_102A7A40(_DWORD *a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v4; // eax
  float v5; // [esp+8h] [ebp-8h]

  v4 = *a3;
  if ( *a3 > 76 )
  {
    if ( v4 > 100006 )
    {
      if ( v4 != 100007 )
        goto LABEL_5;
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 332))(a1) )
      {
        (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)a1[1] + 1312))(a1[1], "Unable to attach to vehicle!");
        return;
      }
    }
    else
    {
      if ( v4 == 100006 )
      {
        sub_102A7340((int)a1, a2);
        return;
      }
      if ( v4 != 120 )
      {
        if ( v4 == 100005 )
          return;
LABEL_5:
        sub_102A1510((int)a1, a3);
        return;
      }
    }
LABEL_12:
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 12))(a1, 0);
    return;
  }
  if ( *a3 != 76 )
  {
    switch ( v4 )
    {
      case '>':
      case '@':
      case 'C':
      case 'E':
      case 'F':
      case 'G':
        goto LABEL_12;
      default:
        goto LABEL_5;
    }
  }
  if ( a1[4] != 2 )
    goto LABEL_5;
  sub_10039F40((int *)a1[1], dword_106DB7BC);
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.0);
  sub_102A79E0(a1, v5);
}

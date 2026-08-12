int __usercall sub_102D1850@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  float v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+8h] [ebp-8h]

  (*(void (__thiscall **)(_DWORD *))(*a1 + 720))(a1);
  a1[228] = -1;
  if ( (a1[62] & 0x20) != 0 )
  {
    v3 = a1[230];
    if ( v3 == -1 || off_1061BE18[4 * (a1[230] & 0xFFF) + 2] != v3 >> 12 || !off_1061BE18[4 * (a1[230] & 0xFFF) + 1] )
    {
      v9 = a2;
      v4 = dword_106B31C8;
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*((float *)a1 + 344) )
      {
        if ( *((_BYTE *)a1 + 1380) && *(float *)(dword_106B31C8 + 12) > 5.0 && !*((_BYTE *)a1 + 1381) )
        {
          sub_102CBED0(a1);
          v4 = dword_106B31C8;
        }
        if ( !sub_102CA1F0(a1) )
        {
          v8 = *(float *)(v4 + 12) + 2.0;
          sub_100EC4A0(a1, v8, 0);
          v4 = dword_106B31C8;
        }
        *((float *)a1 + 344) = *(float *)(v4 + 12) + 2.0;
      }
      a2 = v9;
    }
  }
  v5 = a1[75];
  if ( v5 == -1 || off_1061BE18[4 * (a1[75] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = (_DWORD *)off_1061BE18[4 * (a1[75] & 0xFFF) + 1];
  sub_102608F0(a1 + 209, v6, *((unsigned __int8 *)a1 + 305));
  sub_100D7260((float *)a1, &flt_106F1CB4);
  sub_102CCB00((int)a1, a2);
  if ( fabs(*((float *)a1 + 122)) > 1.0 || fabs(*((float *)a1 + 123)) > 1.0 )
    sub_102D0030((int)a1);
  else
    sub_102CEE20(a1);
  return (*(int (__thiscall **)(_DWORD *))(*a1 + 724))(a1);
}

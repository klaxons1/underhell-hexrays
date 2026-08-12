int __userpurge sub_103DB3F0@<eax>(float *a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  char *v5; // eax
  int v6; // eax
  double v7; // st6
  double v8; // st5
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-4h]
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v11 = *(float *)(dword_106B31C8 + 12) - a1[925];
  if ( sub_10023D10(a1, 10) && !sub_10023D10(a1, 13) )
  {
    v5 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
    if ( sub_103DB2C0(a1, (int)&savedregs, a2, (int)a1, v5) )
    {
      sub_10023E00((char *)a1, 79);
      if ( !*((_BYTE *)a1 + 3646) )
        return 21;
      v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
      v7 = a1[180] - *(float *)(v6 + 720);
      v8 = a1[179] - *(float *)(v6 + 716);
      v10 = v8 * v8 + v7 * v7;
      if ( off_10689708(v10) <= a1[912] )
        return 21;
    }
    else
    {
      sub_10023CB0((char *)a1, 79);
    }
    return 0;
  }
  if ( v11 < 2.0 || *((_BYTE *)a1 + 3646) )
    return 0;
  if ( ((_DWORD)a1[62] & 0x200000) == 0
    && sub_102DC130((unsigned int *)a1 + 914)
    && sub_103DAE00((int)a1, (int)&savedregs, a2, (int)a1) )
  {
    return 73;
  }
  if ( v11 < 2.5 )
    return 0;
  return 77;
}

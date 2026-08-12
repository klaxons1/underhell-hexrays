char __userpurge sub_1041A850@<al>(int *a1@<ecx>, int a2@<ebp>, _DWORD *a3, int a4)
{
  _DWORD *v4; // esi
  unsigned __int8 v6; // al
  int v7; // ebp
  bool v8; // zf
  int v9; // eax
  int v10; // edx
  double v12; // [esp-Ch] [ebp-28h]
  int Src[2]; // [esp+8h] [ebp-14h] BYREF
  float v14[2]; // [esp+10h] [ebp-Ch] BYREF
  __int16 v15; // [esp+18h] [ebp-4h]

  v4 = a3;
  v6 = sub_1041A0B0(a3);
  if ( !v6 )
    return 1;
  HIDWORD(v12) = a2;
  v15 = 0;
  v7 = v6;
  do
  {
    if ( (*((_BYTE *)v4 + 21) & 1) != 0 )
    {
      LODWORD(v12) = Src;
      *(float *)Src = 0.0;
      sub_1042E720(v4, "%f", v12);
    }
    else if ( (unsigned __int8)sub_1042D170(4) )
    {
      v8 = (v4[11] & 1) == 0;
      Src[0] = *(int *)(v4[3] - v4[8] + *v4);
      if ( !v8 )
        sub_100867E0((_BYTE *)v4 + 44, Src, (char *)Src, 1);
      v4[3] += 4;
    }
    else
    {
      *(float *)Src = 0.0;
    }
    if ( (*((_BYTE *)v4 + 21) & 1) != 0 )
    {
      LOBYTE(a3) = 0;
      sub_1042E720(v4, "%u", &a3);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v9 = v4[3] + 1;
      LOBYTE(a3) = *(_BYTE *)(*v4 - v4[8] + v4[3]);
      v4[3] = v9;
    }
    else
    {
      LOBYTE(a3) = 0;
    }
    v10 = a1[3];
    v14[1] = *(float *)Src;
    Src[1] = (unsigned __int8)a3;
    v14[0] = (double)(unsigned __int8)a3 * 0.0039215689;
    sub_1041A030(a1, v10, (int)v14);
    --v7;
  }
  while ( v7 );
  return 1;
}

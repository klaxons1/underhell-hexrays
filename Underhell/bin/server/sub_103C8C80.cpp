unsigned __int8 __usercall sub_103C8C80@<al>(int a1@<ecx>, int a2@<edi>)
{
  unsigned __int8 result; // al
  int v4; // eax
  int v5; // ebx
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  float v11[3]; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  sub_10023E00((char *)a1, 80);
  sub_10023E00((char *)a1, 81);
  sub_10023E00((char *)a1, 82);
  if ( !*(_BYTE *)(a1 + 5752)
    || sub_10023D10((_DWORD *)a1, 26)
    || sub_10023D10((_DWORD *)a1, 50)
    || sub_10023D10((_DWORD *)a1, 18) )
  {
    return (unsigned __int8)sub_10023E00((char *)a1, 83);
  }
  result = (unsigned __int8)sub_10023CB0((char *)a1, 83);
  if ( !*(_BYTE *)(a1 + 5753) )
  {
    v4 = sub_1026A890((unsigned int *)(a1 + 5720));
    v5 = sub_1001F4B0(v4);
    if ( v5 )
    {
      v6 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 576))(a1, a2);
      v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
      v8 = *v7 - *v6;
      v12 = v8;
      v9 = v7[1] - v6[1];
      v13 = v9;
      v10 = v7[2] - v6[2];
      v14 = v10;
      if ( v10 * v10 + v9 * v9 + v8 * v8 > 230400.0 )
        sub_10023CB0((char *)a1, 80);
      v14 = 0.0;
      off_10689714();
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 904))(a1, v11);
      if ( v12 * v11[0] + v11[1] * v13 + v11[2] * v14 < 0.69999999 )
      {
        sub_10023CB0((char *)a1, 82);
        sub_10023E00((char *)a1, 83);
      }
      result = sub_103C8B80((int *)a1, COERCE_FLOAT(&savedregs));
      if ( !result )
      {
        sub_10023CB0((char *)a1, 81);
        return (unsigned __int8)sub_10023E00((char *)a1, 83);
      }
    }
    else
    {
      return (unsigned __int8)sub_10023E00((char *)a1, 83);
    }
  }
  return result;
}

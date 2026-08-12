int __usercall sub_1038EEF0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  bool v5; // zf
  int result; // eax
  bool v8; // al
  int v9; // ecx
  int v10; // eax

  result = sub_1038EA70((int)a1);
  if ( !result )
  {
    v8 = sub_10023D10(a1, 10);
    v9 = (int)a1;
    if ( !v8 )
    {
      if ( !sub_10023D10(a1, 45) )
        return sub_1038EB80(a1);
      v10 = sub_10020820(a1);
      if ( !v10 || *(int *)(v10 + 220) <= 0 || !sub_1004AE20(a1, 12, 13) )
        return sub_1038EB80(a1);
      v9 = (int)a1;
    }
    v3 = (_DWORD *)v9;
    result = sub_1038AD40(v9, a2, a3);
    if ( !result )
    {
      if ( sub_10023D10(v3, 21) && (result = sub_1038E430(v3)) != 0 )
      {
        v3[1046] = -1;
      }
      else
      {
        if ( !sub_1038E970(v3) )
          return 92;
        v5 = !sub_1004AFF0(v4, 10);
        result = 94;
        if ( v5 )
          return 92;
      }
    }
  }
  return result;
}

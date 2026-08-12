char __thiscall sub_1044D990(_DWORD *this, int a2, int a3, char *ArgList, int a5)
{
  int *v5; // esi
  int v7; // ebx
  int v8; // eax
  char *v9[12]; // [esp+Ch] [ebp-30h] BYREF
  int *v10; // [esp+44h] [ebp+8h]

  if ( a3 == -1 )
    v5 = 0;
  else
    v5 = *(int **)(*this + 20 * a3);
  if ( sub_1044A480(v5, ArgList) )
  {
    sub_1044D260((int)word_10701A30, "Encountered duplicate attribute definition for attribute \"%s\"!", ArgList);
    return 0;
  }
  else
  {
    sub_1044A460(v5, 1);
    v10 = (int *)sub_1044A8B0(v5, ArgList);
    if ( v5 )
      sub_1044A460(v5, 0);
    sub_1042DE40((int)v9, 0, 0, 0);
    if ( sub_1044D5B0(a2, (int *)v9) == 2 )
    {
      v7 = 0;
      if ( *(_BYTE *)(a2 + 20) )
      {
LABEL_23:
        sub_1002A150((int *)v9);
        return 1;
      }
      else
      {
        while ( 1 )
        {
          v8 = sub_1044D5B0(a2, (int *)v9);
          if ( v8 == -1 || v8 == 7 )
            break;
          if ( v8 == 3 )
            goto LABEL_23;
          if ( v7 > 0 )
          {
            if ( v8 != 4 )
            {
              sub_1044D260((int)word_10701A30, "Expecting ',', didn't find it!");
              goto LABEL_28;
            }
            v8 = sub_1044D5B0(a2, (int *)v9);
          }
          if ( v8 != 5 )
          {
            sub_1044D260((int)word_10701A30, "Expecting array attribute value, didn't find it!");
            goto LABEL_28;
          }
          if ( !sub_1044D8B0(v10, a5, v9) )
          {
            sub_1044D260((int)word_10701A30, "Error reading in array attribute \"%s\" element %d", ArgList, v7);
            sub_1002A150((int *)v9);
            return 0;
          }
          ++v7;
          if ( *(_BYTE *)(a2 + 20) )
            goto LABEL_23;
        }
        sub_1044D260((int)word_10701A30, "Expecting ']', didn't find it!");
LABEL_28:
        sub_1002A150((int *)v9);
        return 0;
      }
    }
    else
    {
      sub_1044D260((int)word_10701A30, "Expecting '[', didn't find it!");
      if ( (int)v9[2] >= 0 )
      {
        if ( v9[0] )
          (*(void (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v9[0]);
      }
      return 0;
    }
  }
}

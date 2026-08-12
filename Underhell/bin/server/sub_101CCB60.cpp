_DWORD *__thiscall sub_101CCB60(int this)
{
  _DWORD *result; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // eax

  result = (_DWORD *)dword_1069617C;
  if ( *(_DWORD *)(dword_1069617C + 48) )
  {
    if ( *(_BYTE *)(this + 1866) )
    {
      result = *(_DWORD **)(this + 1124);
      if ( result )
      {
        *(_DWORD *)(result[2] + 4) = result[1];
        *(_DWORD *)(result[1] + 8) = result[2];
        --dword_106960D8;
        sub_10184660((int)result);
        *(_DWORD *)(this + 1124) = 0;
        while ( dword_106960E4 >= *(_DWORD *)(dword_1069617C + 48) )
        {
          v3 = *(int **)(dword_106960DC + 4);
          v4 = *v3;
          if ( !*(_BYTE *)(*v3 + 1867) )
          {
            *(_BYTE *)(v4 + 1867) = 1;
            *(_DWORD *)(v4 + 1124) = 0;
            sub_101CB850(v4);
          }
          v5 = *(_DWORD *)(dword_106960DC + 4);
          *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4) = *(_DWORD *)(v5 + 4);
          *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) = *(_DWORD *)(v5 + 8);
          --dword_106960E4;
          sub_10184660(v5);
        }
        result = sub_1011EDA0(&dword_106960DC, this);
        *(_DWORD *)(this + 1124) = result;
      }
    }
    else
    {
      return (_DWORD *)Warning("ERROR: RemovefromRaglist called on a non-Gib \n");
    }
  }
  else if ( !*(_BYTE *)(this + 1867) )
  {
    *(_DWORD *)(this + 1124) = 0;
    *(_BYTE *)(this + 1867) = 1;
    return (_DWORD *)sub_101CB850(this);
  }
  return result;
}

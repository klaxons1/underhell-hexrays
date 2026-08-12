char *__thiscall sub_10231080(int this, unsigned __int8 a2)
{
  char *result; // eax
  int i; // esi
  char *v6; // eax

  result = (char *)dword_106C46DC;
  if ( *(_DWORD *)(dword_106C46DC + 48) )
  {
    if ( a2 == *(_BYTE *)(this + 852) )
      return result;
    *(_BYTE *)(this + 852) = a2;
  }
  result = *(char **)(this + 260);
  if ( result )
  {
    result = (char *)sub_1012BF20(&dword_1069E3E0, 0, result, 0, 0, 0, 0);
    for ( i = (int)result; result; i = (int)result )
    {
      if ( *(char **)(i + 92) == "scripted_sequence" || sub_100D6240((_DWORD *)i, "scripted_sequence") )
      {
        if ( a2 )
        {
          ++*(_DWORD *)(this + 848);
        }
        else if ( (*(_DWORD *)(i + 848))-- == 1 )
        {
          *(float *)(i + 856) = *(float *)(dword_106B31C8 + 12);
        }
      }
      v6 = *(char **)(this + 260);
      if ( !v6 )
        v6 = (char *)String;
      result = (char *)sub_1012BF20(&dword_1069E3E0, i, v6, 0, 0, 0, 0);
    }
  }
  else
  {
    *(_DWORD *)(this + 848) = a2;
    *(float *)(this + 856) = *(float *)(dword_106B31C8 + 12);
  }
  return result;
}

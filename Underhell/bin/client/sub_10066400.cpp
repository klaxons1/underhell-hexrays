_DWORD *__thiscall sub_10066400(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *result; // eax
  int v3; // ecx
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // esi
  _DWORD *v7; // [esp+10h] [ebp-Ch]
  int i; // [esp+18h] [ebp-4h]

  v1 = this;
  result = (_DWORD *)sub_1007A630(this[311]);
  v3 = 0;
  v7 = result;
  for ( i = 0; v3 < (int)v7; i = v3 )
  {
    result = (_DWORD *)sub_101E6500(v3);
    if ( result )
    {
      result = (_DWORD *)sub_10065E70(v1, (int)result);
      v4 = result;
      if ( result )
      {
        if ( !result[485] )
        {
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(result[1] + 36))(result + 1);
          if ( result )
            result = (_DWORD *)sub_10026520((int)v4);
        }
        v5 = v4[485];
        if ( v5 )
        {
          if ( *(_DWORD *)v5 )
          {
            result = *(_DWORD **)v5;
            if ( *(_DWORD *)(*(_DWORD *)v5 + 260) )
            {
              v6 = 0;
              if ( (int)result[67] > 0 )
              {
                do
                  sub_1003EB70(v4, v6++, 0.0);
                while ( v6 < *(_DWORD *)(*(_DWORD *)v5 + 268) );
              }
              result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v4[626] + 20))(v4 + 626);
              v1 = this;
            }
          }
        }
      }
    }
    v3 = i + 1;
  }
  return result;
}

void __thiscall sub_10030F00(_DWORD *this, float *a2, float *a3)
{
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // esi
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  sub_10029130(this, a2, a3);
  if ( !sub_10025550((int)(this - 1)) )
  {
    v4 = 0;
    if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
      sub_10026520((int)(this - 1));
    v5 = (_DWORD *)this[484];
    if ( v5 )
    {
      if ( *v5 )
      {
        if ( (unsigned __int8)sub_101282A0(v5) )
        {
          v8 = sub_10126D70(v5);
          if ( (int)this[492] > 0 )
          {
            v9 = 0;
            do
            {
              v6 = this[489];
              if ( *(float *)(v6 + v9 + 8) > 0.0 && *(_DWORD *)(v6 + v9) < v8 )
              {
                v7 = sub_10127960(*(_DWORD *)(v6 + v9));
                sub_100158B0((float *)(v7 + 32), a2, a2);
                sub_10015910((float *)(v7 + 44), a3, a3);
              }
              v9 += 32;
              ++v4;
            }
            while ( v4 < this[492] );
          }
        }
      }
    }
  }
}

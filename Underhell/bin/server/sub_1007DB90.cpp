char __thiscall sub_1007DB90(_DWORD *this, int a2, int a3, const char *a4, const char *a5)
{
  int v5; // edi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // esi
  int v11; // esi
  int v12; // esi

  v5 = this[5];
  if ( v5 )
  {
    if ( this[1] == 9999 && (v7 = this[4], this[1] = a3, v7) && (v8 = *(_DWORD *)(v7 + 4), v8 != 9999) && a3 <= v8 )
    {
      DevMsg("ERROR: Bad %s LOCALID for %s\n", a4, a5);
      return 0;
    }
    else
    {
      v9 = this[1];
      if ( a3 >= v9 )
      {
        v10 = this[2];
        if ( v10 == -1 )
        {
          this[2] = v9;
          this[3] = *this;
        }
        else if ( a3 > v10 )
        {
          v11 = *this - v9;
          this[2] = a3;
          this[3] = a3 + v11;
        }
        v12 = sub_1007DB30(this, a3);
        if ( v12 != -1 )
        {
          sub_10244E30(a2, v12);
          if ( *(_DWORD *)(v5 + 4) < v12 + 1 )
            *(_DWORD *)(v5 + 4) = v12 + 1;
        }
        return 1;
      }
      else
      {
        DevMsg("ERROR: %s First added %s must be first LOCALID!\n", a4, a5);
        return 0;
      }
    }
  }
  else
  {
    DevMsg("ERROR: Adding symbol to uninitialized table %s\n", a5);
    return 0;
  }
}

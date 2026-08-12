char *__thiscall sub_102A0320(int this)
{
  char *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  int (*v6)(void); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  result = *(char **)(this + 16);
  if ( !result || result == (char *)3 )
  {
    if ( *(_DWORD *)(this + 104) == 1 )
    {
      v6 = *(int (**)(void))(*(_DWORD *)this + 52);
      *(_DWORD *)(this + 104) = 0;
      v7 = v6();
      v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100006);
      sub_10023CB0(*(char **)(this + 4), v8);
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v10 = sub_1007DB30((_DWORD *)(v9 + 52), 100001);
      sub_10023E00(*(char **)(this + 4), v10);
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v12 = sub_1007DB30((_DWORD *)(v11 + 52), 100002);
      return sub_10023E00(*(char **)(this + 4), v12);
    }
  }
  else
  {
    *(_DWORD *)(this + 104) = 2;
    v3 = *(_DWORD *)(this + 68);
    if ( v3 != -1 )
    {
      result = (char *)&off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
      v4 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] == v4 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] == v4 )
            v5 = *(_DWORD *)result;
          else
            v5 = 0;
          result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 868))(v5);
          if ( !(_BYTE)result )
            return sub_1004C1E0((char **)this, 100002);
        }
      }
    }
  }
  return result;
}

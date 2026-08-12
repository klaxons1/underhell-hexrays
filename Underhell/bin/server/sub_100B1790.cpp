void __userpurge sub_100B1790(int a1@<ecx>, double a2@<st0>, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  _DWORD *v9; // [esp+8h] [ebp-4h]

  v3 = a3;
  if ( a3 )
  {
    v4 = 0;
    if ( *(int *)(a1 + 72) > 0 )
    {
      v9 = (_DWORD *)(a1 + 8);
      do
      {
        if ( *v9 != -1 )
        {
          v5 = &off_1061BE18[4 * (*v9 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (*v9 & 0xFFF) + 2] == *v9 >> 12 )
          {
            v6 = (_DWORD *)*v5;
            if ( *v5 )
            {
              if ( !(*(int (__thiscall **)(int))(*v6 + 368))(*v5)
                || (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 368))(v6) != v3
                && !sub_10023D10(v6, 10)
                && (v7 = dword_106B31C8, sub_10021820(v6), a2 = *(float *)(v7 + 12) - a2, v3 = a3, a2 > 3.0) )
              {
                if ( !*(_DWORD *)(dword_10698344 + 48)
                  || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 1484))(v6, v3) )
                {
                  sub_100285C0(v6, v3, 1);
                }
              }
            }
          }
        }
        ++v9;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(a1 + 72) );
    }
  }
  else
  {
    DevMsg("ERROR: SquadNewEnemy() - pEnemy is NULL!\n");
  }
}

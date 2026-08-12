_DWORD *__thiscall sub_10039160(void *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int *v4; // esi
  int v5; // edi
  char v6; // al
  float v7; // [esp+0h] [ebp-18h]
  int v9; // [esp+14h] [ebp-4h]

  result = a2;
  if ( a2 && (int)a2[3] > 0 )
  {
    v3 = 0;
    v9 = a2[3];
    while ( 1 )
    {
      v4 = *(int **)(*result + v3 + 8);
      v5 = *v4;
      v6 = (*(int (__thiscall **)(int *))(*v4 + 28))(v4);
      v7 = sub_10038610((int)this, v6);
      result = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v5 + 8))(v4, LODWORD(v7));
      v3 += 12;
      if ( !--v9 )
        break;
      result = a2;
    }
  }
  return result;
}

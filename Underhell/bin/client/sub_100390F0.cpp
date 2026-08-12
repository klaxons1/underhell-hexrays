int *__thiscall sub_100390F0(void *this, int *a2)
{
  int *result; // eax
  int v3; // ebx
  int v4; // eax
  int *v5; // esi
  int v6; // edi
  char v7; // al
  float v8; // [esp+8h] [ebp-18h]
  int v10; // [esp+1Ch] [ebp-4h]

  result = a2;
  if ( a2 && a2[3] > 0 )
  {
    v3 = 0;
    v10 = a2[3];
    while ( 1 )
    {
      v4 = *result;
      v5 = *(int **)(v4 + v3 + 8);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v5 + 4))(
        v5,
        *(_DWORD *)(v4 + v3 + 4),
        *(unsigned __int16 *)(v4 + v3));
      v6 = *v5;
      v7 = (*(int (__thiscall **)(int *))(*v5 + 28))(v5);
      v8 = sub_10038610((int)this, v7);
      result = (int *)(*(int (__thiscall **)(int *, _DWORD))(v6 + 8))(v5, LODWORD(v8));
      v3 += 12;
      if ( !--v10 )
        break;
      result = a2;
    }
  }
  return result;
}

int __thiscall sub_1013AD70(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int *v11; // ebx
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int *v15; // ebx
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+18h] [ebp+8h]
  int v19; // [esp+18h] [ebp+8h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2);
  if ( !*(_DWORD *)(result + 1284) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 24))(this);
    sub_1013A830(this);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
    if ( v6 > 0 )
    {
      v18 = v6;
      do
      {
        v17 = sub_100DDA40(20);
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
        (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)a2 + 8))(a2, v17, &dword_103E77B8);
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
        v7 = this[4];
        v8 = this[2];
        if ( v7 + 1 > v8 )
          sub_1010AFF0(this + 1, v7 - v8 + 1);
        ++this[4];
        v9 = this[1];
        v10 = this[4] - v7 - 1;
        this[5] = v9;
        if ( v10 > 0 )
          memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
        v11 = (int *)(this[1] + 4 * v7);
        if ( v11 )
          *v11 = v17;
        --v18;
      }
      while ( v18 );
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
    if ( result > 0 )
    {
      v19 = result;
      do
      {
        v16 = sub_100DDA40(40);
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
        (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)a2 + 8))(a2, v16, &dword_103E77D0);
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
        v12 = this[9];
        v13 = this[7];
        if ( v12 + 1 > v13 )
          sub_1010AFF0(this + 6, v12 - v13 + 1);
        ++this[9];
        v14 = this[6];
        result = this[9] - v12 - 1;
        this[10] = v14;
        if ( result > 0 )
          result = (int)memcpy((void *)(v14 + 4 * v12 + 4), (const void *)(v14 + 4 * v12), 4 * result);
        v15 = (int *)(this[6] + 4 * v12);
        if ( v15 )
          *v15 = v16;
        --v19;
      }
      while ( v19 );
    }
  }
  return result;
}

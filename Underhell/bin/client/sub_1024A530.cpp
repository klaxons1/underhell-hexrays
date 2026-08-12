int __thiscall sub_1024A530(_DWORD *this, int *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  int *v6; // edx
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // ecx
  int v11; // ebx
  bool v12; // cc
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int result; // eax
  int v18; // [esp+10h] [ebp-1Ch]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h] BYREF
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch] BYREF
  int v23; // [esp+24h] [ebp-8h] BYREF
  int v24; // [esp+28h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 280))(this, &v20, &v22);
  v6 = a2;
  v7 = v20;
  v8 = 0;
  *a2 = 0;
  *a3 = 0;
  v9 = this[53];
  v10 = 0;
  v11 = 0;
  v12 = this[58] <= 0;
  v19 = 0;
  v18 = 0;
  v21 = v9;
  if ( !v12 )
  {
    do
    {
      v13 = this[55];
      v14 = *(_DWORD *)(v13 + v8);
      v15 = v8 + v13;
      if ( v14 )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v14 + 12))(v14, &v23, &v24);
        v7 = v20;
        if ( v23 > v20 )
          v21 = 3;
        if ( v18 <= v24 )
          v18 = v24;
        v19 += v23 + *(__int16 *)(v15 + 4);
      }
      ++v11;
      v8 += 12;
    }
    while ( v11 < this[58] );
    v10 = v19;
    v9 = v21;
    v6 = a2;
  }
  switch ( v9 )
  {
    case 0:
    case 3:
    case 6:
      *v6 = 0;
      break;
    case 1:
    case 4:
    case 7:
      v6 = a2;
      v16 = (v7 - v10) / 2;
      goto LABEL_14;
    case 2:
    case 5:
    case 8:
      v16 = v7 - v10;
LABEL_14:
      *v6 = v16;
      break;
    default:
      break;
  }
  switch ( this[53] )
  {
    case 0:
    case 1:
    case 2:
      *a3 = 0;
      break;
    case 3:
    case 4:
    case 5:
      *a3 = (v22 - v18) / 2;
      break;
    case 6:
    case 7:
    case 8:
      *a3 = v22 - v18;
      break;
    default:
      break;
  }
  *a4 = v19 + *a2;
  result = v18 + *a3;
  *a5 = result;
  return result;
}

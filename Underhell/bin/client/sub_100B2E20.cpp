void *__thiscall sub_100B2E20(int this, float *a2, float *a3, float *a4)
{
  int v5; // eax
  int v6; // esi
  float *v7; // edi
  void *result; // eax

  if ( *(_BYTE *)(this + 80) )
  {
    sub_100B2890();
    *(_BYTE *)(this + 80) = 0;
  }
  if ( *(int *)(this + 12) > 0 && (v5 = sub_1012D2F0(*(_DWORD *)(this + 12)), (v6 = v5) != 0) )
  {
    v7 = a3;
    (*(void (__thiscall **)(int, float *, float *, float **, float **, float *))(*(_DWORD *)v5 + 800))(
      v5,
      a2,
      a3,
      &a3,
      &a4,
      a4);
    return (void *)(*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v6 + 804))(v6, a2, v7);
  }
  else
  {
    result = (void *)(*(_DWORD *)(this + 8) - 3);
    switch ( *(_DWORD *)(this + 8) )
    {
      case 3:
        result = sub_100B27C0(this, a2, a3, a4);
        break;
      case 4:
        result = (void *)sub_100B2690(this, a2, a3, a4);
        break;
      case 5:
        result = (void *)sub_100B21A0(this, a2, a3, (int)a4);
        break;
      case 6:
        result = sub_100B2B50(this, a2, a3, a4);
        break;
      default:
        return result;
    }
  }
  return result;
}

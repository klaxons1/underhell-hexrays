_DWORD *__thiscall sub_10237910(_DWORD *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  _DWORD *result; // eax
  float v12; // [esp+18h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp-4h]

  v12 = (float)(int)this[279];
  v13 = (float)(int)this[280];
  v2 = (int *)sub_10271E50("vgui_screen", "slideshow_display_screen", this, this, -1);
  v3 = *v2;
  v4 = sub_100D8840(this);
  (*(void (__thiscall **)(int *, int))(v3 + 348))(v2, v4);
  sub_10271D60(v12, v13);
  sub_10271A40(1);
  sub_10271B50(0);
  sub_10271A90(1);
  v5 = this[285];
  v6 = this[283];
  if ( v5 + 1 > v6 )
    sub_102ABFC0(v5 - v6 + 1);
  ++this[285];
  v7 = this[282];
  v8 = this[285] - v5 - 1;
  this[286] = v7;
  if ( v8 > 0 )
    memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
  v9 = (_DWORD *)(4 * v5 + this[282]);
  if ( v9 )
    *v9 = -1;
  v10 = (_DWORD *)(4 * v5 + this[282]);
  result = (_DWORD *)(*(int (__thiscall **)(int *))(*v2 + 8))(v2);
  *v10 = *result;
  return result;
}

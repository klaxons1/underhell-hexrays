_DWORD *__thiscall sub_100142C0(_DWORD *this)
{
  *this = &IPresence::`vftable';
  sub_100D36C0(0);
  *this = &CBasePresence::`vftable';
  this[1] = &CBasePresence::`vftable';
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  sub_10014240(
    this + 12,
    0,
    (int)"user_context",
    (int)sub_10014180,
    0,
    (int)"Set a Rich Presence Context: user_context <context id> <context value>",
    0,
    0,
    0);
  this[23] = this;
  sub_10014240(
    this + 28,
    0,
    (int)"user_property",
    (int)sub_100141E0,
    0,
    (int)"Set a Rich Presence Property: user_property <property id>",
    0,
    0,
    0);
  this[39] = this;
  return this;
}
